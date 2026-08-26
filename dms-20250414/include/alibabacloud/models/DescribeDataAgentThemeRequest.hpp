// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTTHEMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTTHEMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeDataAgentThemeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAgentThemeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAgentThemeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
    };
    DescribeDataAgentThemeRequest() = default ;
    DescribeDataAgentThemeRequest(const DescribeDataAgentThemeRequest &) = default ;
    DescribeDataAgentThemeRequest(DescribeDataAgentThemeRequest &&) = default ;
    DescribeDataAgentThemeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAgentThemeRequest() = default ;
    DescribeDataAgentThemeRequest& operator=(const DescribeDataAgentThemeRequest &) = default ;
    DescribeDataAgentThemeRequest& operator=(DescribeDataAgentThemeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->themeId_ == nullptr; };
    // themeId Field Functions 
    bool hasThemeId() const { return this->themeId_ != nullptr;};
    void deleteThemeId() { this->themeId_ = nullptr;};
    inline string getThemeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, "") };
    inline DescribeDataAgentThemeRequest& setThemeId(string themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


  protected:
    // The business ID of the theme.
    shared_ptr<string> themeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
