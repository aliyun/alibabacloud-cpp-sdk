// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMEXCEPTIONSTACKRESPONSEBODYDATATHREADINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRUMEXCEPTIONSTACKRESPONSEBODYDATATHREADINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumExceptionStackResponseBodyDataThreadInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumExceptionStackResponseBodyDataThreadInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ThreadDetail, threadDetail_);
      DARABONBA_PTR_TO_JSON(ThreadTag, threadTag_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumExceptionStackResponseBodyDataThreadInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ThreadDetail, threadDetail_);
      DARABONBA_PTR_FROM_JSON(ThreadTag, threadTag_);
    };
    GetRumExceptionStackResponseBodyDataThreadInfoList() = default ;
    GetRumExceptionStackResponseBodyDataThreadInfoList(const GetRumExceptionStackResponseBodyDataThreadInfoList &) = default ;
    GetRumExceptionStackResponseBodyDataThreadInfoList(GetRumExceptionStackResponseBodyDataThreadInfoList &&) = default ;
    GetRumExceptionStackResponseBodyDataThreadInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumExceptionStackResponseBodyDataThreadInfoList() = default ;
    GetRumExceptionStackResponseBodyDataThreadInfoList& operator=(const GetRumExceptionStackResponseBodyDataThreadInfoList &) = default ;
    GetRumExceptionStackResponseBodyDataThreadInfoList& operator=(GetRumExceptionStackResponseBodyDataThreadInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->threadDetail_ != nullptr
        && this->threadTag_ != nullptr; };
    // threadDetail Field Functions 
    bool hasThreadDetail() const { return this->threadDetail_ != nullptr;};
    void deleteThreadDetail() { this->threadDetail_ = nullptr;};
    inline string threadDetail() const { DARABONBA_PTR_GET_DEFAULT(threadDetail_, "") };
    inline GetRumExceptionStackResponseBodyDataThreadInfoList& setThreadDetail(string threadDetail) { DARABONBA_PTR_SET_VALUE(threadDetail_, threadDetail) };


    // threadTag Field Functions 
    bool hasThreadTag() const { return this->threadTag_ != nullptr;};
    void deleteThreadTag() { this->threadTag_ = nullptr;};
    inline string threadTag() const { DARABONBA_PTR_GET_DEFAULT(threadTag_, "") };
    inline GetRumExceptionStackResponseBodyDataThreadInfoList& setThreadTag(string threadTag) { DARABONBA_PTR_SET_VALUE(threadTag_, threadTag) };


  protected:
    // Thread stack details.
    std::shared_ptr<string> threadDetail_ = nullptr;
    // The thread tag, including the thread number and name.
    std::shared_ptr<string> threadTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
