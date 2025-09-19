// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATAENTITYTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATAENTITYTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayColor, displayColor_);
      DARABONBA_PTR_TO_JSON(DisplayIcon, displayIcon_);
      DARABONBA_PTR_TO_JSON(DisplayOrder, displayOrder_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayColor, displayColor_);
      DARABONBA_PTR_FROM_JSON(DisplayIcon, displayIcon_);
      DARABONBA_PTR_FROM_JSON(DisplayOrder, displayOrder_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList(const DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList(DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList &&) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList& operator=(const DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList& operator=(DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayColor_ != nullptr
        && this->displayIcon_ != nullptr && this->displayOrder_ != nullptr && this->id_ != nullptr && this->name_ != nullptr; };
    // displayColor Field Functions 
    bool hasDisplayColor() const { return this->displayColor_ != nullptr;};
    void deleteDisplayColor() { this->displayColor_ = nullptr;};
    inline string displayColor() const { DARABONBA_PTR_GET_DEFAULT(displayColor_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList& setDisplayColor(string displayColor) { DARABONBA_PTR_SET_VALUE(displayColor_, displayColor) };


    // displayIcon Field Functions 
    bool hasDisplayIcon() const { return this->displayIcon_ != nullptr;};
    void deleteDisplayIcon() { this->displayIcon_ = nullptr;};
    inline string displayIcon() const { DARABONBA_PTR_GET_DEFAULT(displayIcon_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList& setDisplayIcon(string displayIcon) { DARABONBA_PTR_SET_VALUE(displayIcon_, displayIcon) };


    // displayOrder Field Functions 
    bool hasDisplayOrder() const { return this->displayOrder_ != nullptr;};
    void deleteDisplayOrder() { this->displayOrder_ = nullptr;};
    inline int32_t displayOrder() const { DARABONBA_PTR_GET_DEFAULT(displayOrder_, 0) };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList& setDisplayOrder(int32_t displayOrder) { DARABONBA_PTR_SET_VALUE(displayOrder_, displayOrder) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Vertex rendering color.
    std::shared_ptr<string> displayColor_ = nullptr;
    // Vertex icon.
    std::shared_ptr<string> displayIcon_ = nullptr;
    // Display order
    std::shared_ptr<int32_t> displayOrder_ = nullptr;
    // Node type ID.
    std::shared_ptr<string> id_ = nullptr;
    // Vertex name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
