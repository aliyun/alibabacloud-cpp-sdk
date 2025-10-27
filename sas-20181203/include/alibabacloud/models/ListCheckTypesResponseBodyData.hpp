// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKTYPESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKTYPESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckTypesResponseBodyDataCheckDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckTypesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckTypesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CheckDetails, checkDetails_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(CheckTypeDisName, checkTypeDisName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckTypesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckDetails, checkDetails_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(CheckTypeDisName, checkTypeDisName_);
    };
    ListCheckTypesResponseBodyData() = default ;
    ListCheckTypesResponseBodyData(const ListCheckTypesResponseBodyData &) = default ;
    ListCheckTypesResponseBodyData(ListCheckTypesResponseBodyData &&) = default ;
    ListCheckTypesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckTypesResponseBodyData() = default ;
    ListCheckTypesResponseBodyData& operator=(const ListCheckTypesResponseBodyData &) = default ;
    ListCheckTypesResponseBodyData& operator=(ListCheckTypesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkDetails_ == nullptr
        && return this->checkType_ == nullptr && return this->checkTypeDisName_ == nullptr; };
    // checkDetails Field Functions 
    bool hasCheckDetails() const { return this->checkDetails_ != nullptr;};
    void deleteCheckDetails() { this->checkDetails_ = nullptr;};
    inline const vector<Models::ListCheckTypesResponseBodyDataCheckDetails> & checkDetails() const { DARABONBA_PTR_GET_CONST(checkDetails_, vector<Models::ListCheckTypesResponseBodyDataCheckDetails>) };
    inline vector<Models::ListCheckTypesResponseBodyDataCheckDetails> checkDetails() { DARABONBA_PTR_GET(checkDetails_, vector<Models::ListCheckTypesResponseBodyDataCheckDetails>) };
    inline ListCheckTypesResponseBodyData& setCheckDetails(const vector<Models::ListCheckTypesResponseBodyDataCheckDetails> & checkDetails) { DARABONBA_PTR_SET_VALUE(checkDetails_, checkDetails) };
    inline ListCheckTypesResponseBodyData& setCheckDetails(vector<Models::ListCheckTypesResponseBodyDataCheckDetails> && checkDetails) { DARABONBA_PTR_SET_RVALUE(checkDetails_, checkDetails) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline ListCheckTypesResponseBodyData& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // checkTypeDisName Field Functions 
    bool hasCheckTypeDisName() const { return this->checkTypeDisName_ != nullptr;};
    void deleteCheckTypeDisName() { this->checkTypeDisName_ = nullptr;};
    inline string checkTypeDisName() const { DARABONBA_PTR_GET_DEFAULT(checkTypeDisName_, "") };
    inline ListCheckTypesResponseBodyData& setCheckTypeDisName(string checkTypeDisName) { DARABONBA_PTR_SET_VALUE(checkTypeDisName_, checkTypeDisName) };


  protected:
    // The detail of check items.
    std::shared_ptr<vector<Models::ListCheckTypesResponseBodyDataCheckDetails>> checkDetails_ = nullptr;
    // The type of the check item.
    std::shared_ptr<string> checkType_ = nullptr;
    // The display name of the check item type.
    std::shared_ptr<string> checkTypeDisName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
