// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODYCONNECTORSAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODYCONNECTORSAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListConnectorsResponseBodyConnectorsApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectorsResponseBodyConnectorsApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectorsResponseBodyConnectorsApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
    };
    ListConnectorsResponseBodyConnectorsApplications() = default ;
    ListConnectorsResponseBodyConnectorsApplications(const ListConnectorsResponseBodyConnectorsApplications &) = default ;
    ListConnectorsResponseBodyConnectorsApplications(ListConnectorsResponseBodyConnectorsApplications &&) = default ;
    ListConnectorsResponseBodyConnectorsApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectorsResponseBodyConnectorsApplications() = default ;
    ListConnectorsResponseBodyConnectorsApplications& operator=(const ListConnectorsResponseBodyConnectorsApplications &) = default ;
    ListConnectorsResponseBodyConnectorsApplications& operator=(ListConnectorsResponseBodyConnectorsApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->applicationName_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListConnectorsResponseBodyConnectorsApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListConnectorsResponseBodyConnectorsApplications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> applicationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
