// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SaveCrowdDatasetAndBindingDatasetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCrowdDatasetAndBindingDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCrowdDatasetAndBindingDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    SaveCrowdDatasetAndBindingDatasetShrinkRequest() = default ;
    SaveCrowdDatasetAndBindingDatasetShrinkRequest(const SaveCrowdDatasetAndBindingDatasetShrinkRequest &) = default ;
    SaveCrowdDatasetAndBindingDatasetShrinkRequest(SaveCrowdDatasetAndBindingDatasetShrinkRequest &&) = default ;
    SaveCrowdDatasetAndBindingDatasetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCrowdDatasetAndBindingDatasetShrinkRequest() = default ;
    SaveCrowdDatasetAndBindingDatasetShrinkRequest& operator=(const SaveCrowdDatasetAndBindingDatasetShrinkRequest &) = default ;
    SaveCrowdDatasetAndBindingDatasetShrinkRequest& operator=(SaveCrowdDatasetAndBindingDatasetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bodyShrink_ != nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string bodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline SaveCrowdDatasetAndBindingDatasetShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    std::shared_ptr<string> bodyShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
