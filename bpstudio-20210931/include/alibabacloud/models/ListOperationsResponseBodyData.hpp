// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ListOperationsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    ListOperationsResponseBodyData() = default ;
    ListOperationsResponseBodyData(const ListOperationsResponseBodyData &) = default ;
    ListOperationsResponseBodyData(ListOperationsResponseBodyData &&) = default ;
    ListOperationsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationsResponseBodyData() = default ;
    ListOperationsResponseBodyData& operator=(const ListOperationsResponseBodyData &) = default ;
    ListOperationsResponseBodyData& operator=(ListOperationsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->operation_ == nullptr && return this->service_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListOperationsResponseBodyData& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ListOperationsResponseBodyData& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ListOperationsResponseBodyData& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
