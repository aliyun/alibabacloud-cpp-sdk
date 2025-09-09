// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKMENURESPONSEBODYLISTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKMENURESPONSEBODYLISTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackMenuResponseBodyListList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackMenuResponseBodyListList& obj) { 
      DARABONBA_PTR_TO_JSON(MenuName, menuName_);
      DARABONBA_PTR_TO_JSON(Support, support_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackMenuResponseBodyListList& obj) { 
      DARABONBA_PTR_FROM_JSON(MenuName, menuName_);
      DARABONBA_PTR_FROM_JSON(Support, support_);
    };
    DescribeBackMenuResponseBodyListList() = default ;
    DescribeBackMenuResponseBodyListList(const DescribeBackMenuResponseBodyListList &) = default ;
    DescribeBackMenuResponseBodyListList(DescribeBackMenuResponseBodyListList &&) = default ;
    DescribeBackMenuResponseBodyListList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackMenuResponseBodyListList() = default ;
    DescribeBackMenuResponseBodyListList& operator=(const DescribeBackMenuResponseBodyListList &) = default ;
    DescribeBackMenuResponseBodyListList& operator=(DescribeBackMenuResponseBodyListList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->menuName_ != nullptr
        && this->support_ != nullptr; };
    // menuName Field Functions 
    bool hasMenuName() const { return this->menuName_ != nullptr;};
    void deleteMenuName() { this->menuName_ = nullptr;};
    inline string menuName() const { DARABONBA_PTR_GET_DEFAULT(menuName_, "") };
    inline DescribeBackMenuResponseBodyListList& setMenuName(string menuName) { DARABONBA_PTR_SET_VALUE(menuName_, menuName) };


    // support Field Functions 
    bool hasSupport() const { return this->support_ != nullptr;};
    void deleteSupport() { this->support_ = nullptr;};
    inline bool support() const { DARABONBA_PTR_GET_DEFAULT(support_, false) };
    inline DescribeBackMenuResponseBodyListList& setSupport(bool support) { DARABONBA_PTR_SET_VALUE(support_, support) };


  protected:
    // The backup method. Valid values:
    // 
    // *   **Logic **: logical backup
    // *   **phy**: physical backup
    std::shared_ptr<string> menuName_ = nullptr;
    // Indicates whether backup recovery is supported.
    std::shared_ptr<bool> support_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
