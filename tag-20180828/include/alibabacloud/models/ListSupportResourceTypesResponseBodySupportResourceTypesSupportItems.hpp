// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTRESOURCETYPESRESPONSEBODYSUPPORTRESOURCETYPESSUPPORTITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTRESOURCETYPESRESPONSEBODYSUPPORTRESOURCETYPESSUPPORTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems& obj) { 
      DARABONBA_PTR_TO_JSON(Support, support_);
      DARABONBA_PTR_TO_JSON(SupportCode, supportCode_);
      DARABONBA_PTR_TO_JSON(SupportDetails, supportDetails_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Support, support_);
      DARABONBA_PTR_FROM_JSON(SupportCode, supportCode_);
      DARABONBA_PTR_FROM_JSON(SupportDetails, supportDetails_);
    };
    ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems() = default ;
    ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems(const ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems &) = default ;
    ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems(ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems &&) = default ;
    ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems() = default ;
    ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems& operator=(const ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems &) = default ;
    ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems& operator=(ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->support_ != nullptr
        && this->supportCode_ != nullptr && this->supportDetails_ != nullptr; };
    // support Field Functions 
    bool hasSupport() const { return this->support_ != nullptr;};
    void deleteSupport() { this->support_ = nullptr;};
    inline bool support() const { DARABONBA_PTR_GET_DEFAULT(support_, false) };
    inline ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems& setSupport(bool support) { DARABONBA_PTR_SET_VALUE(support_, support) };


    // supportCode Field Functions 
    bool hasSupportCode() const { return this->supportCode_ != nullptr;};
    void deleteSupportCode() { this->supportCode_ = nullptr;};
    inline string supportCode() const { DARABONBA_PTR_GET_DEFAULT(supportCode_, "") };
    inline ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems& setSupportCode(string supportCode) { DARABONBA_PTR_SET_VALUE(supportCode_, supportCode) };


    // supportDetails Field Functions 
    bool hasSupportDetails() const { return this->supportDetails_ != nullptr;};
    void deleteSupportDetails() { this->supportDetails_ = nullptr;};
    inline const vector<map<string, string>> & supportDetails() const { DARABONBA_PTR_GET_CONST(supportDetails_, vector<map<string, string>>) };
    inline vector<map<string, string>> supportDetails() { DARABONBA_PTR_GET(supportDetails_, vector<map<string, string>>) };
    inline ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems& setSupportDetails(const vector<map<string, string>> & supportDetails) { DARABONBA_PTR_SET_VALUE(supportDetails_, supportDetails) };
    inline ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems& setSupportDetails(vector<map<string, string>> && supportDetails) { DARABONBA_PTR_SET_RVALUE(supportDetails_, supportDetails) };


  protected:
    // Indicates whether the tag-related capability item is supported. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> support_ = nullptr;
    // The code of the tag-related capability item.
    std::shared_ptr<string> supportCode_ = nullptr;
    // The details of the support for the tag-related capability item.
    std::shared_ptr<vector<map<string, string>>> supportDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
