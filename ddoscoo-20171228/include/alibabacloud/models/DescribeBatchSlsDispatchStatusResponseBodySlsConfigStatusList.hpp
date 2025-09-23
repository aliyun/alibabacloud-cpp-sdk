// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODYSLSCONFIGSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODYSLSCONFIGSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList() = default ;
    DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList(const DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList &) = default ;
    DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList(DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList &&) = default ;
    DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList() = default ;
    DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList& operator=(const DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList &) = default ;
    DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList& operator=(DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->enable_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
