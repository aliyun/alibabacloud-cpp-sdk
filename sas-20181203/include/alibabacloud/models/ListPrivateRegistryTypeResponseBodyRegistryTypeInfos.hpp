// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYTYPERESPONSEBODYREGISTRYTYPEINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYTYPERESPONSEBODYREGISTRYTYPEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPrivateRegistryTypeResponseBodyRegistryTypeInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateRegistryTypeResponseBodyRegistryTypeInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateRegistryTypeResponseBodyRegistryTypeInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
    };
    ListPrivateRegistryTypeResponseBodyRegistryTypeInfos() = default ;
    ListPrivateRegistryTypeResponseBodyRegistryTypeInfos(const ListPrivateRegistryTypeResponseBodyRegistryTypeInfos &) = default ;
    ListPrivateRegistryTypeResponseBodyRegistryTypeInfos(ListPrivateRegistryTypeResponseBodyRegistryTypeInfos &&) = default ;
    ListPrivateRegistryTypeResponseBodyRegistryTypeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateRegistryTypeResponseBodyRegistryTypeInfos() = default ;
    ListPrivateRegistryTypeResponseBodyRegistryTypeInfos& operator=(const ListPrivateRegistryTypeResponseBodyRegistryTypeInfos &) = default ;
    ListPrivateRegistryTypeResponseBodyRegistryTypeInfos& operator=(ListPrivateRegistryTypeResponseBodyRegistryTypeInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->registryType_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListPrivateRegistryTypeResponseBodyRegistryTypeInfos& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline ListPrivateRegistryTypeResponseBodyRegistryTypeInfos& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


  protected:
    // The number of image repositories.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The name of the image repository type. Valid values:
    // 
    // *   **acr**: Container Registry
    // *   **harbor**: Harbor
    // *   **quay**: Quay
    // *   **CI/CD**: Jenkins
    std::shared_ptr<string> registryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
