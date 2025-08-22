// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMEXCEPTIONSTACKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRUMEXCEPTIONSTACKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRumExceptionStackResponseBodyDataThreadInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumExceptionStackResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumExceptionStackResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BinaryImages, binaryImages_);
      DARABONBA_PTR_TO_JSON(CrashAddress, crashAddress_);
      DARABONBA_PTR_TO_JSON(CrashReason, crashReason_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
      DARABONBA_PTR_TO_JSON(ThreadInfoList, threadInfoList_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumExceptionStackResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BinaryImages, binaryImages_);
      DARABONBA_PTR_FROM_JSON(CrashAddress, crashAddress_);
      DARABONBA_PTR_FROM_JSON(CrashReason, crashReason_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
      DARABONBA_PTR_FROM_JSON(ThreadInfoList, threadInfoList_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetRumExceptionStackResponseBodyData() = default ;
    GetRumExceptionStackResponseBodyData(const GetRumExceptionStackResponseBodyData &) = default ;
    GetRumExceptionStackResponseBodyData(GetRumExceptionStackResponseBodyData &&) = default ;
    GetRumExceptionStackResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumExceptionStackResponseBodyData() = default ;
    GetRumExceptionStackResponseBodyData& operator=(const GetRumExceptionStackResponseBodyData &) = default ;
    GetRumExceptionStackResponseBodyData& operator=(GetRumExceptionStackResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->binaryImages_ != nullptr
        && this->crashAddress_ != nullptr && this->crashReason_ != nullptr && this->lines_ != nullptr && this->moduleName_ != nullptr && this->threadId_ != nullptr
        && this->threadInfoList_ != nullptr && this->uuid_ != nullptr; };
    // binaryImages Field Functions 
    bool hasBinaryImages() const { return this->binaryImages_ != nullptr;};
    void deleteBinaryImages() { this->binaryImages_ = nullptr;};
    inline string binaryImages() const { DARABONBA_PTR_GET_DEFAULT(binaryImages_, "") };
    inline GetRumExceptionStackResponseBodyData& setBinaryImages(string binaryImages) { DARABONBA_PTR_SET_VALUE(binaryImages_, binaryImages) };


    // crashAddress Field Functions 
    bool hasCrashAddress() const { return this->crashAddress_ != nullptr;};
    void deleteCrashAddress() { this->crashAddress_ = nullptr;};
    inline string crashAddress() const { DARABONBA_PTR_GET_DEFAULT(crashAddress_, "") };
    inline GetRumExceptionStackResponseBodyData& setCrashAddress(string crashAddress) { DARABONBA_PTR_SET_VALUE(crashAddress_, crashAddress) };


    // crashReason Field Functions 
    bool hasCrashReason() const { return this->crashReason_ != nullptr;};
    void deleteCrashReason() { this->crashReason_ = nullptr;};
    inline string crashReason() const { DARABONBA_PTR_GET_DEFAULT(crashReason_, "") };
    inline GetRumExceptionStackResponseBodyData& setCrashReason(string crashReason) { DARABONBA_PTR_SET_VALUE(crashReason_, crashReason) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline const vector<string> & lines() const { DARABONBA_PTR_GET_CONST(lines_, vector<string>) };
    inline vector<string> lines() { DARABONBA_PTR_GET(lines_, vector<string>) };
    inline GetRumExceptionStackResponseBodyData& setLines(const vector<string> & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
    inline GetRumExceptionStackResponseBodyData& setLines(vector<string> && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetRumExceptionStackResponseBodyData& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline GetRumExceptionStackResponseBodyData& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // threadInfoList Field Functions 
    bool hasThreadInfoList() const { return this->threadInfoList_ != nullptr;};
    void deleteThreadInfoList() { this->threadInfoList_ = nullptr;};
    inline const vector<Models::GetRumExceptionStackResponseBodyDataThreadInfoList> & threadInfoList() const { DARABONBA_PTR_GET_CONST(threadInfoList_, vector<Models::GetRumExceptionStackResponseBodyDataThreadInfoList>) };
    inline vector<Models::GetRumExceptionStackResponseBodyDataThreadInfoList> threadInfoList() { DARABONBA_PTR_GET(threadInfoList_, vector<Models::GetRumExceptionStackResponseBodyDataThreadInfoList>) };
    inline GetRumExceptionStackResponseBodyData& setThreadInfoList(const vector<Models::GetRumExceptionStackResponseBodyDataThreadInfoList> & threadInfoList) { DARABONBA_PTR_SET_VALUE(threadInfoList_, threadInfoList) };
    inline GetRumExceptionStackResponseBodyData& setThreadInfoList(vector<Models::GetRumExceptionStackResponseBodyDataThreadInfoList> && threadInfoList) { DARABONBA_PTR_SET_RVALUE(threadInfoList_, threadInfoList) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetRumExceptionStackResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The name and UUID of the symbol table required for parsing the exception stack. This parameter is exposed during the parsing of PC errors.
    std::shared_ptr<string> binaryImages_ = nullptr;
    // The crash address. This parameter is exposed during the parsing of PC errors.
    std::shared_ptr<string> crashAddress_ = nullptr;
    // The cause of the exception. This parameter is exposed during the parsing of PC errors.
    std::shared_ptr<string> crashReason_ = nullptr;
    // The list of stacks.
    std::shared_ptr<vector<string>> lines_ = nullptr;
    // The name of the crash parsing module. This parameter is exposed during the parsing of PC errors.
    std::shared_ptr<string> moduleName_ = nullptr;
    // The thread ID.
    std::shared_ptr<string> threadId_ = nullptr;
    // The thread stack information captured during PC crashes.
    std::shared_ptr<vector<Models::GetRumExceptionStackResponseBodyDataThreadInfoList>> threadInfoList_ = nullptr;
    // The UUID of the symbol table required for parsing the stack. This parameter is exposed during the parsing of PC errors.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
