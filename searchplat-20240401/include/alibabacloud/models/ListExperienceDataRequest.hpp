// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIENCEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIENCEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListExperienceDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperienceDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperienceDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
    };
    ListExperienceDataRequest() = default ;
    ListExperienceDataRequest(const ListExperienceDataRequest &) = default ;
    ListExperienceDataRequest(ListExperienceDataRequest &&) = default ;
    ListExperienceDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperienceDataRequest() = default ;
    ListExperienceDataRequest& operator=(const ListExperienceDataRequest &) = default ;
    ListExperienceDataRequest& operator=(ListExperienceDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataType_ == nullptr
        && this->dryRun_ == nullptr && this->serviceType_ == nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline ListExperienceDataRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ListExperienceDataRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListExperienceDataRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    // The data type.
    shared_ptr<string> dataType_ {};
    // - true
    // - false.
    shared_ptr<bool> dryRun_ {};
    // The service type.
    shared_ptr<string> serviceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
