// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANDFACTORYRESPONSEBODYDATAFACTORYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETORGANDFACTORYRESPONSEBODYDATAFACTORYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetOrgAndFactoryResponseBodyDataFactoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrgAndFactoryResponseBodyDataFactoryList& obj) { 
      DARABONBA_PTR_TO_JSON(factoryId, factoryId_);
      DARABONBA_PTR_TO_JSON(factoryName, factoryName_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrgAndFactoryResponseBodyDataFactoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(factoryId, factoryId_);
      DARABONBA_PTR_FROM_JSON(factoryName, factoryName_);
    };
    GetOrgAndFactoryResponseBodyDataFactoryList() = default ;
    GetOrgAndFactoryResponseBodyDataFactoryList(const GetOrgAndFactoryResponseBodyDataFactoryList &) = default ;
    GetOrgAndFactoryResponseBodyDataFactoryList(GetOrgAndFactoryResponseBodyDataFactoryList &&) = default ;
    GetOrgAndFactoryResponseBodyDataFactoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrgAndFactoryResponseBodyDataFactoryList() = default ;
    GetOrgAndFactoryResponseBodyDataFactoryList& operator=(const GetOrgAndFactoryResponseBodyDataFactoryList &) = default ;
    GetOrgAndFactoryResponseBodyDataFactoryList& operator=(GetOrgAndFactoryResponseBodyDataFactoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->factoryId_ == nullptr
        && return this->factoryName_ == nullptr; };
    // factoryId Field Functions 
    bool hasFactoryId() const { return this->factoryId_ != nullptr;};
    void deleteFactoryId() { this->factoryId_ = nullptr;};
    inline string factoryId() const { DARABONBA_PTR_GET_DEFAULT(factoryId_, "") };
    inline GetOrgAndFactoryResponseBodyDataFactoryList& setFactoryId(string factoryId) { DARABONBA_PTR_SET_VALUE(factoryId_, factoryId) };


    // factoryName Field Functions 
    bool hasFactoryName() const { return this->factoryName_ != nullptr;};
    void deleteFactoryName() { this->factoryName_ = nullptr;};
    inline string factoryName() const { DARABONBA_PTR_GET_DEFAULT(factoryName_, "") };
    inline GetOrgAndFactoryResponseBodyDataFactoryList& setFactoryName(string factoryName) { DARABONBA_PTR_SET_VALUE(factoryName_, factoryName) };


  protected:
    // The site ID.
    std::shared_ptr<string> factoryId_ = nullptr;
    // The site name.
    std::shared_ptr<string> factoryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
