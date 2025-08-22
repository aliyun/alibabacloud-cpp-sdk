// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTERRAFORMPROVIDERVERSIONSRESPONSEBODYVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTERRAFORMPROVIDERVERSIONSRESPONSEBODYVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListTerraformProviderVersionsResponseBodyVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTerraformProviderVersionsResponseBodyVersions& obj) { 
      DARABONBA_PTR_TO_JSON(publishedTime, publishedTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListTerraformProviderVersionsResponseBodyVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(publishedTime, publishedTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListTerraformProviderVersionsResponseBodyVersions() = default ;
    ListTerraformProviderVersionsResponseBodyVersions(const ListTerraformProviderVersionsResponseBodyVersions &) = default ;
    ListTerraformProviderVersionsResponseBodyVersions(ListTerraformProviderVersionsResponseBodyVersions &&) = default ;
    ListTerraformProviderVersionsResponseBodyVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTerraformProviderVersionsResponseBodyVersions() = default ;
    ListTerraformProviderVersionsResponseBodyVersions& operator=(const ListTerraformProviderVersionsResponseBodyVersions &) = default ;
    ListTerraformProviderVersionsResponseBodyVersions& operator=(ListTerraformProviderVersionsResponseBodyVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->publishedTime_ != nullptr
        && this->status_ != nullptr && this->version_ != nullptr; };
    // publishedTime Field Functions 
    bool hasPublishedTime() const { return this->publishedTime_ != nullptr;};
    void deletePublishedTime() { this->publishedTime_ = nullptr;};
    inline string publishedTime() const { DARABONBA_PTR_GET_DEFAULT(publishedTime_, "") };
    inline ListTerraformProviderVersionsResponseBodyVersions& setPublishedTime(string publishedTime) { DARABONBA_PTR_SET_VALUE(publishedTime_, publishedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTerraformProviderVersionsResponseBodyVersions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListTerraformProviderVersionsResponseBodyVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> publishedTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
