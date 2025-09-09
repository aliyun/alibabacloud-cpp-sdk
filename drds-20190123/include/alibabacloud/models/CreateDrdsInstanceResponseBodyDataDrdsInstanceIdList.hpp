// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDRDSINSTANCERESPONSEBODYDATADRDSINSTANCEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDRDSINSTANCERESPONSEBODYDATADRDSINSTANCEIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList& obj) { 
      DARABONBA_PTR_TO_JSON(drdsInstanceIdList, drdsInstanceIdList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(drdsInstanceIdList, drdsInstanceIdList_);
    };
    CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList() = default ;
    CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList(const CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList &) = default ;
    CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList(CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList &&) = default ;
    CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList() = default ;
    CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList& operator=(const CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList &) = default ;
    CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList& operator=(CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsInstanceIdList_ != nullptr; };
    // drdsInstanceIdList Field Functions 
    bool hasDrdsInstanceIdList() const { return this->drdsInstanceIdList_ != nullptr;};
    void deleteDrdsInstanceIdList() { this->drdsInstanceIdList_ = nullptr;};
    inline const vector<string> & drdsInstanceIdList() const { DARABONBA_PTR_GET_CONST(drdsInstanceIdList_, vector<string>) };
    inline vector<string> drdsInstanceIdList() { DARABONBA_PTR_GET(drdsInstanceIdList_, vector<string>) };
    inline CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList& setDrdsInstanceIdList(const vector<string> & drdsInstanceIdList) { DARABONBA_PTR_SET_VALUE(drdsInstanceIdList_, drdsInstanceIdList) };
    inline CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList& setDrdsInstanceIdList(vector<string> && drdsInstanceIdList) { DARABONBA_PTR_SET_RVALUE(drdsInstanceIdList_, drdsInstanceIdList) };


  protected:
    std::shared_ptr<vector<string>> drdsInstanceIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
