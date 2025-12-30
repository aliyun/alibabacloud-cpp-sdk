// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLSOFTWARESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLSOFTWARESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UninstallSoftwaresRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallSoftwaresRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallSoftwaresRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    UninstallSoftwaresRequest() = default ;
    UninstallSoftwaresRequest(const UninstallSoftwaresRequest &) = default ;
    UninstallSoftwaresRequest(UninstallSoftwaresRequest &&) = default ;
    UninstallSoftwaresRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallSoftwaresRequest() = default ;
    UninstallSoftwaresRequest& operator=(const UninstallSoftwaresRequest &) = default ;
    UninstallSoftwaresRequest& operator=(UninstallSoftwaresRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdditionalPackages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdditionalPackages& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, AdditionalPackages& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      AdditionalPackages() = default ;
      AdditionalPackages(const AdditionalPackages &) = default ;
      AdditionalPackages(AdditionalPackages &&) = default ;
      AdditionalPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdditionalPackages() = default ;
      AdditionalPackages& operator=(const AdditionalPackages &) = default ;
      AdditionalPackages& operator=(AdditionalPackages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->version_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AdditionalPackages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline AdditionalPackages& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The software name.
      shared_ptr<string> name_ {};
      // The software version.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->additionalPackages_ == nullptr
        && this->clusterId_ == nullptr; };
    // additionalPackages Field Functions 
    bool hasAdditionalPackages() const { return this->additionalPackages_ != nullptr;};
    void deleteAdditionalPackages() { this->additionalPackages_ = nullptr;};
    inline const vector<UninstallSoftwaresRequest::AdditionalPackages> & getAdditionalPackages() const { DARABONBA_PTR_GET_CONST(additionalPackages_, vector<UninstallSoftwaresRequest::AdditionalPackages>) };
    inline vector<UninstallSoftwaresRequest::AdditionalPackages> getAdditionalPackages() { DARABONBA_PTR_GET(additionalPackages_, vector<UninstallSoftwaresRequest::AdditionalPackages>) };
    inline UninstallSoftwaresRequest& setAdditionalPackages(const vector<UninstallSoftwaresRequest::AdditionalPackages> & additionalPackages) { DARABONBA_PTR_SET_VALUE(additionalPackages_, additionalPackages) };
    inline UninstallSoftwaresRequest& setAdditionalPackages(vector<UninstallSoftwaresRequest::AdditionalPackages> && additionalPackages) { DARABONBA_PTR_SET_RVALUE(additionalPackages_, additionalPackages) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UninstallSoftwaresRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The information about the software systems that you want to uninstall.
    shared_ptr<vector<UninstallSoftwaresRequest::AdditionalPackages>> additionalPackages_ {};
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
