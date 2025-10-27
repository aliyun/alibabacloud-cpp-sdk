// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTPROBLEMTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTPROBLEMTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClientProblemTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientProblemTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientProblemTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeClientProblemTypeRequest() = default ;
    DescribeClientProblemTypeRequest(const DescribeClientProblemTypeRequest &) = default ;
    DescribeClientProblemTypeRequest(DescribeClientProblemTypeRequest &&) = default ;
    DescribeClientProblemTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientProblemTypeRequest() = default ;
    DescribeClientProblemTypeRequest& operator=(const DescribeClientProblemTypeRequest &) = default ;
    DescribeClientProblemTypeRequest& operator=(DescribeClientProblemTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeClientProblemTypeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
