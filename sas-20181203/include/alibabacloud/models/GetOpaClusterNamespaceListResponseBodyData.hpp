// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPACLUSTERNAMESPACELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOPACLUSTERNAMESPACELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaClusterNamespaceListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaClusterNamespaceListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NameSpaceName, nameSpaceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaClusterNamespaceListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NameSpaceName, nameSpaceName_);
    };
    GetOpaClusterNamespaceListResponseBodyData() = default ;
    GetOpaClusterNamespaceListResponseBodyData(const GetOpaClusterNamespaceListResponseBodyData &) = default ;
    GetOpaClusterNamespaceListResponseBodyData(GetOpaClusterNamespaceListResponseBodyData &&) = default ;
    GetOpaClusterNamespaceListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaClusterNamespaceListResponseBodyData() = default ;
    GetOpaClusterNamespaceListResponseBodyData& operator=(const GetOpaClusterNamespaceListResponseBodyData &) = default ;
    GetOpaClusterNamespaceListResponseBodyData& operator=(GetOpaClusterNamespaceListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nameSpaceName_ == nullptr; };
    // nameSpaceName Field Functions 
    bool hasNameSpaceName() const { return this->nameSpaceName_ != nullptr;};
    void deleteNameSpaceName() { this->nameSpaceName_ = nullptr;};
    inline string nameSpaceName() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceName_, "") };
    inline GetOpaClusterNamespaceListResponseBodyData& setNameSpaceName(string nameSpaceName) { DARABONBA_PTR_SET_VALUE(nameSpaceName_, nameSpaceName) };


  protected:
    // The name of the namespace.
    std::shared_ptr<string> nameSpaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
