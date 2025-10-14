// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATARESPONSEBODYERRORDETAIL_HPP_
#define ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATARESPONSEBODYERRORDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutHybridMonitorMetricDataResponseBodyErrorDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutHybridMonitorMetricDataResponseBodyErrorDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Index, index_);
    };
    friend void from_json(const Darabonba::Json& j, PutHybridMonitorMetricDataResponseBodyErrorDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
    };
    PutHybridMonitorMetricDataResponseBodyErrorDetail() = default ;
    PutHybridMonitorMetricDataResponseBodyErrorDetail(const PutHybridMonitorMetricDataResponseBodyErrorDetail &) = default ;
    PutHybridMonitorMetricDataResponseBodyErrorDetail(PutHybridMonitorMetricDataResponseBodyErrorDetail &&) = default ;
    PutHybridMonitorMetricDataResponseBodyErrorDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutHybridMonitorMetricDataResponseBodyErrorDetail() = default ;
    PutHybridMonitorMetricDataResponseBodyErrorDetail& operator=(const PutHybridMonitorMetricDataResponseBodyErrorDetail &) = default ;
    PutHybridMonitorMetricDataResponseBodyErrorDetail& operator=(PutHybridMonitorMetricDataResponseBodyErrorDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->index_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline PutHybridMonitorMetricDataResponseBodyErrorDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline PutHybridMonitorMetricDataResponseBodyErrorDetail& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


  protected:
    // The error message of the invalid parameter.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The position of the error message in the array.
    std::shared_ptr<int64_t> index_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
