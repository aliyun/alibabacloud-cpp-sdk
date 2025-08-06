// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(ErrorLines, errorLines_);
      DARABONBA_PTR_TO_JSON(ImportSequence, importSequence_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(ErrorLines, errorLines_);
      DARABONBA_PTR_FROM_JSON(ImportSequence, importSequence_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    UpdateStatusRequest() = default ;
    UpdateStatusRequest(const UpdateStatusRequest &) = default ;
    UpdateStatusRequest(UpdateStatusRequest &&) = default ;
    UpdateStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStatusRequest() = default ;
    UpdateStatusRequest& operator=(const UpdateStatusRequest &) = default ;
    UpdateStatusRequest& operator=(UpdateStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->errorLines_ != nullptr && this->importSequence_ != nullptr && this->language_ != nullptr && this->status_ != nullptr && this->systemToken_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline UpdateStatusRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // errorLines Field Functions 
    bool hasErrorLines() const { return this->errorLines_ != nullptr;};
    void deleteErrorLines() { this->errorLines_ = nullptr;};
    inline const vector<int32_t> & errorLines() const { DARABONBA_PTR_GET_CONST(errorLines_, vector<int32_t>) };
    inline vector<int32_t> errorLines() { DARABONBA_PTR_GET(errorLines_, vector<int32_t>) };
    inline UpdateStatusRequest& setErrorLines(const vector<int32_t> & errorLines) { DARABONBA_PTR_SET_VALUE(errorLines_, errorLines) };
    inline UpdateStatusRequest& setErrorLines(vector<int32_t> && errorLines) { DARABONBA_PTR_SET_RVALUE(errorLines_, errorLines) };


    // importSequence Field Functions 
    bool hasImportSequence() const { return this->importSequence_ != nullptr;};
    void deleteImportSequence() { this->importSequence_ = nullptr;};
    inline string importSequence() const { DARABONBA_PTR_GET_DEFAULT(importSequence_, "") };
    inline UpdateStatusRequest& setImportSequence(string importSequence) { DARABONBA_PTR_SET_VALUE(importSequence_, importSequence) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline UpdateStatusRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline UpdateStatusRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<vector<int32_t>> errorLines_ = nullptr;
    std::shared_ptr<string> importSequence_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
