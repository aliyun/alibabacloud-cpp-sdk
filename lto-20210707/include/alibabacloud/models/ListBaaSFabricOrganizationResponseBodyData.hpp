// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBAASFABRICORGANIZATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBAASFABRICORGANIZATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListBaaSFabricOrganizationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaaSFabricOrganizationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BaaSFabricOrganizationId, baaSFabricOrganizationId_);
      DARABONBA_PTR_TO_JSON(BaaSFabricOrganizationName, baaSFabricOrganizationName_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaaSFabricOrganizationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BaaSFabricOrganizationId, baaSFabricOrganizationId_);
      DARABONBA_PTR_FROM_JSON(BaaSFabricOrganizationName, baaSFabricOrganizationName_);
    };
    ListBaaSFabricOrganizationResponseBodyData() = default ;
    ListBaaSFabricOrganizationResponseBodyData(const ListBaaSFabricOrganizationResponseBodyData &) = default ;
    ListBaaSFabricOrganizationResponseBodyData(ListBaaSFabricOrganizationResponseBodyData &&) = default ;
    ListBaaSFabricOrganizationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaaSFabricOrganizationResponseBodyData() = default ;
    ListBaaSFabricOrganizationResponseBodyData& operator=(const ListBaaSFabricOrganizationResponseBodyData &) = default ;
    ListBaaSFabricOrganizationResponseBodyData& operator=(ListBaaSFabricOrganizationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baaSFabricOrganizationId_ == nullptr
        && return this->baaSFabricOrganizationName_ == nullptr; };
    // baaSFabricOrganizationId Field Functions 
    bool hasBaaSFabricOrganizationId() const { return this->baaSFabricOrganizationId_ != nullptr;};
    void deleteBaaSFabricOrganizationId() { this->baaSFabricOrganizationId_ = nullptr;};
    inline string baaSFabricOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(baaSFabricOrganizationId_, "") };
    inline ListBaaSFabricOrganizationResponseBodyData& setBaaSFabricOrganizationId(string baaSFabricOrganizationId) { DARABONBA_PTR_SET_VALUE(baaSFabricOrganizationId_, baaSFabricOrganizationId) };


    // baaSFabricOrganizationName Field Functions 
    bool hasBaaSFabricOrganizationName() const { return this->baaSFabricOrganizationName_ != nullptr;};
    void deleteBaaSFabricOrganizationName() { this->baaSFabricOrganizationName_ = nullptr;};
    inline string baaSFabricOrganizationName() const { DARABONBA_PTR_GET_DEFAULT(baaSFabricOrganizationName_, "") };
    inline ListBaaSFabricOrganizationResponseBodyData& setBaaSFabricOrganizationName(string baaSFabricOrganizationName) { DARABONBA_PTR_SET_VALUE(baaSFabricOrganizationName_, baaSFabricOrganizationName) };


  protected:
    std::shared_ptr<string> baaSFabricOrganizationId_ = nullptr;
    std::shared_ptr<string> baaSFabricOrganizationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
