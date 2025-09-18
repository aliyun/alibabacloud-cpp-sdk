// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWONLINEFEATURESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWONLINEFEATURESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureViewOnlineFeaturesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewOnlineFeaturesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JoinIds, joinIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewOnlineFeaturesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JoinIds, joinIdsShrink_);
    };
    ListFeatureViewOnlineFeaturesShrinkRequest() = default ;
    ListFeatureViewOnlineFeaturesShrinkRequest(const ListFeatureViewOnlineFeaturesShrinkRequest &) = default ;
    ListFeatureViewOnlineFeaturesShrinkRequest(ListFeatureViewOnlineFeaturesShrinkRequest &&) = default ;
    ListFeatureViewOnlineFeaturesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewOnlineFeaturesShrinkRequest() = default ;
    ListFeatureViewOnlineFeaturesShrinkRequest& operator=(const ListFeatureViewOnlineFeaturesShrinkRequest &) = default ;
    ListFeatureViewOnlineFeaturesShrinkRequest& operator=(ListFeatureViewOnlineFeaturesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->joinIdsShrink_ != nullptr; };
    // joinIdsShrink Field Functions 
    bool hasJoinIdsShrink() const { return this->joinIdsShrink_ != nullptr;};
    void deleteJoinIdsShrink() { this->joinIdsShrink_ = nullptr;};
    inline string joinIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(joinIdsShrink_, "") };
    inline ListFeatureViewOnlineFeaturesShrinkRequest& setJoinIdsShrink(string joinIdsShrink) { DARABONBA_PTR_SET_VALUE(joinIdsShrink_, joinIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> joinIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
