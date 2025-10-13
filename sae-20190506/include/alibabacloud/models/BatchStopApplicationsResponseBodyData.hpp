// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSTOPAPPLICATIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BATCHSTOPAPPLICATIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BatchStopApplicationsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchStopApplicationsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchStopApplicationsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
    };
    BatchStopApplicationsResponseBodyData() = default ;
    BatchStopApplicationsResponseBodyData(const BatchStopApplicationsResponseBodyData &) = default ;
    BatchStopApplicationsResponseBodyData(BatchStopApplicationsResponseBodyData &&) = default ;
    BatchStopApplicationsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchStopApplicationsResponseBodyData() = default ;
    BatchStopApplicationsResponseBodyData& operator=(const BatchStopApplicationsResponseBodyData &) = default ;
    BatchStopApplicationsResponseBodyData& operator=(BatchStopApplicationsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderId_ == nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline BatchStopApplicationsResponseBodyData& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


  protected:
    // The error code.
    // 
    // *   If the request is successful, this parameter is not returned.****
    // *   This parameter is returned only if the request failed.**** For more information, see the "**Error codes**" section in this topic.
    std::shared_ptr<string> changeOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
