// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLTRENDRESPONSEBODYDATACALLERRORTRENDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLTRENDRESPONSEBODYDATACALLERRORTRENDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList& obj) { 
      DARABONBA_PTR_TO_JSON(CallCount, callCount_);
      DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_TO_JSON(Minute, minute_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList& obj) { 
      DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
      DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_FROM_JSON(Minute, minute_);
    };
    GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList() = default ;
    GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList(const GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList &) = default ;
    GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList(GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList &&) = default ;
    GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList() = default ;
    GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList& operator=(const GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList &) = default ;
    GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList& operator=(GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callCount_ != nullptr
        && this->errorCount_ != nullptr && this->minute_ != nullptr; };
    // callCount Field Functions 
    bool hasCallCount() const { return this->callCount_ != nullptr;};
    void deleteCallCount() { this->callCount_ = nullptr;};
    inline int64_t callCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0L) };
    inline GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList& setCallCount(int64_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int64_t errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
    inline GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // minute Field Functions 
    bool hasMinute() const { return this->minute_ != nullptr;};
    void deleteMinute() { this->minute_ = nullptr;};
    inline string minute() const { DARABONBA_PTR_GET_DEFAULT(minute_, "") };
    inline GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList& setMinute(string minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


  protected:
    std::shared_ptr<int64_t> callCount_ = nullptr;
    std::shared_ptr<int64_t> errorCount_ = nullptr;
    std::shared_ptr<string> minute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
