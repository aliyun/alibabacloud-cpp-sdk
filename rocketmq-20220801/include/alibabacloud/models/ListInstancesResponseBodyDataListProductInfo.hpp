// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATALISTPRODUCTINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATALISTPRODUCTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListInstancesResponseBodyDataListProductInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyDataListProductInfo& obj) { 
      DARABONBA_PTR_TO_JSON(traceOn, traceOn_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyDataListProductInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(traceOn, traceOn_);
    };
    ListInstancesResponseBodyDataListProductInfo() = default ;
    ListInstancesResponseBodyDataListProductInfo(const ListInstancesResponseBodyDataListProductInfo &) = default ;
    ListInstancesResponseBodyDataListProductInfo(ListInstancesResponseBodyDataListProductInfo &&) = default ;
    ListInstancesResponseBodyDataListProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyDataListProductInfo() = default ;
    ListInstancesResponseBodyDataListProductInfo& operator=(const ListInstancesResponseBodyDataListProductInfo &) = default ;
    ListInstancesResponseBodyDataListProductInfo& operator=(ListInstancesResponseBodyDataListProductInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->traceOn_ != nullptr; };
    // traceOn Field Functions 
    bool hasTraceOn() const { return this->traceOn_ != nullptr;};
    void deleteTraceOn() { this->traceOn_ = nullptr;};
    inline bool traceOn() const { DARABONBA_PTR_GET_DEFAULT(traceOn_, false) };
    inline ListInstancesResponseBodyDataListProductInfo& setTraceOn(bool traceOn) { DARABONBA_PTR_SET_VALUE(traceOn_, traceOn) };


  protected:
    // Indicates whether the message trace feature is enabled. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is not in use. By default, the message trace feature is enabled for ApsaraMQ for RocketMQ instances, regardless of whether this parameter is configured.
    std::shared_ptr<bool> traceOn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
