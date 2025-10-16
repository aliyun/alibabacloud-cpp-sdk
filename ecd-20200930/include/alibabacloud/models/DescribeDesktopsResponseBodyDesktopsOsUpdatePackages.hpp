// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSOSUPDATEPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSOSUPDATEPACKAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopsResponseBodyDesktopsOsUpdatePackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsResponseBodyDesktopsOsUpdatePackages& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Kb, kb_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsResponseBodyDesktopsOsUpdatePackages& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Kb, kb_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeDesktopsResponseBodyDesktopsOsUpdatePackages() = default ;
    DescribeDesktopsResponseBodyDesktopsOsUpdatePackages(const DescribeDesktopsResponseBodyDesktopsOsUpdatePackages &) = default ;
    DescribeDesktopsResponseBodyDesktopsOsUpdatePackages(DescribeDesktopsResponseBodyDesktopsOsUpdatePackages &&) = default ;
    DescribeDesktopsResponseBodyDesktopsOsUpdatePackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsResponseBodyDesktopsOsUpdatePackages() = default ;
    DescribeDesktopsResponseBodyDesktopsOsUpdatePackages& operator=(const DescribeDesktopsResponseBodyDesktopsOsUpdatePackages &) = default ;
    DescribeDesktopsResponseBodyDesktopsOsUpdatePackages& operator=(DescribeDesktopsResponseBodyDesktopsOsUpdatePackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->kb_ == nullptr && return this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDesktopsResponseBodyDesktopsOsUpdatePackages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // kb Field Functions 
    bool hasKb() const { return this->kb_ != nullptr;};
    void deleteKb() { this->kb_ = nullptr;};
    inline string kb() const { DARABONBA_PTR_GET_DEFAULT(kb_, "") };
    inline DescribeDesktopsResponseBodyDesktopsOsUpdatePackages& setKb(string kb) { DARABONBA_PTR_SET_VALUE(kb_, kb) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeDesktopsResponseBodyDesktopsOsUpdatePackages& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> kb_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
