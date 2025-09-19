// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATARELATIONTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATARELATIONTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(Directed, directed_);
      DARABONBA_PTR_TO_JSON(DisplayColor, displayColor_);
      DARABONBA_PTR_TO_JSON(DisplayIcon, displayIcon_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Directed, directed_);
      DARABONBA_PTR_FROM_JSON(DisplayColor, displayColor_);
      DARABONBA_PTR_FROM_JSON(DisplayIcon, displayIcon_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList(const DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList(DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList &&) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList& operator=(const DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList& operator=(DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->directed_ != nullptr
        && this->displayColor_ != nullptr && this->displayIcon_ != nullptr && this->name_ != nullptr; };
    // directed Field Functions 
    bool hasDirected() const { return this->directed_ != nullptr;};
    void deleteDirected() { this->directed_ = nullptr;};
    inline int32_t directed() const { DARABONBA_PTR_GET_DEFAULT(directed_, 0) };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList& setDirected(int32_t directed) { DARABONBA_PTR_SET_VALUE(directed_, directed) };


    // displayColor Field Functions 
    bool hasDisplayColor() const { return this->displayColor_ != nullptr;};
    void deleteDisplayColor() { this->displayColor_ = nullptr;};
    inline string displayColor() const { DARABONBA_PTR_GET_DEFAULT(displayColor_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList& setDisplayColor(string displayColor) { DARABONBA_PTR_SET_VALUE(displayColor_, displayColor) };


    // displayIcon Field Functions 
    bool hasDisplayIcon() const { return this->displayIcon_ != nullptr;};
    void deleteDisplayIcon() { this->displayIcon_ = nullptr;};
    inline string displayIcon() const { DARABONBA_PTR_GET_DEFAULT(displayIcon_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList& setDisplayIcon(string displayIcon) { DARABONBA_PTR_SET_VALUE(displayIcon_, displayIcon) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Direction of the edge. Possible values:
    // - **1** ： Forward
    // - **0**： Reverse
    std::shared_ptr<int32_t> directed_ = nullptr;
    // Render color of the edge.
    std::shared_ptr<string> displayColor_ = nullptr;
    // Icon style of the edge
    std::shared_ptr<string> displayIcon_ = nullptr;
    // Name of the edge.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
