// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetYzdInstanceTaskResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYzdInstanceTaskResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetYzdInstanceTaskResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    GetYzdInstanceTaskResultShrinkRequest() = default ;
    GetYzdInstanceTaskResultShrinkRequest(const GetYzdInstanceTaskResultShrinkRequest &) = default ;
    GetYzdInstanceTaskResultShrinkRequest(GetYzdInstanceTaskResultShrinkRequest &&) = default ;
    GetYzdInstanceTaskResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYzdInstanceTaskResultShrinkRequest() = default ;
    GetYzdInstanceTaskResultShrinkRequest& operator=(const GetYzdInstanceTaskResultShrinkRequest &) = default ;
    GetYzdInstanceTaskResultShrinkRequest& operator=(GetYzdInstanceTaskResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline GetYzdInstanceTaskResultShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    shared_ptr<string> bodyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
