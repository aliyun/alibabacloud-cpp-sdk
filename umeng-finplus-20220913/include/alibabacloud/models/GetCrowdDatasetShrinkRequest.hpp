// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCROWDDATASETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCROWDDATASETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetCrowdDatasetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCrowdDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetCrowdDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    GetCrowdDatasetShrinkRequest() = default ;
    GetCrowdDatasetShrinkRequest(const GetCrowdDatasetShrinkRequest &) = default ;
    GetCrowdDatasetShrinkRequest(GetCrowdDatasetShrinkRequest &&) = default ;
    GetCrowdDatasetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCrowdDatasetShrinkRequest() = default ;
    GetCrowdDatasetShrinkRequest& operator=(const GetCrowdDatasetShrinkRequest &) = default ;
    GetCrowdDatasetShrinkRequest& operator=(GetCrowdDatasetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline GetCrowdDatasetShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    shared_ptr<string> bodyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
