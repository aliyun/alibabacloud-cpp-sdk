// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItems& obj) { 
      DARABONBA_PTR_TO_JSON(PublishItem, publishItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItems& obj) { 
      DARABONBA_PTR_FROM_JSON(PublishItem, publishItem_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItems() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItems(const DescribeLiveUpVideoAudioInfoResponseBodyUpItems &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItems(DescribeLiveUpVideoAudioInfoResponseBodyUpItems &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItems() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItems& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItems &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItems& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->publishItem_ != nullptr; };
    // publishItem Field Functions 
    bool hasPublishItem() const { return this->publishItem_ != nullptr;};
    void deletePublishItem() { this->publishItem_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem> & publishItem() const { DARABONBA_PTR_GET_CONST(publishItem_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem> publishItem() { DARABONBA_PTR_GET(publishItem_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItems& setPublishItem(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem> & publishItem) { DARABONBA_PTR_SET_VALUE(publishItem_, publishItem) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItems& setPublishItem(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem> && publishItem) { DARABONBA_PTR_SET_RVALUE(publishItem_, publishItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem>> publishItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
