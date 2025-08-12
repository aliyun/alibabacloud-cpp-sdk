// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODYLIVEAREASLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODYLIVEAREASLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePrivateLineAreasResponseBodyLiveAreasList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePrivateLineAreasResponseBodyLiveAreasList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveArea, liveArea_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePrivateLineAreasResponseBodyLiveAreasList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveArea, liveArea_);
    };
    DescribeLivePrivateLineAreasResponseBodyLiveAreasList() = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasList(const DescribeLivePrivateLineAreasResponseBodyLiveAreasList &) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasList(DescribeLivePrivateLineAreasResponseBodyLiveAreasList &&) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePrivateLineAreasResponseBodyLiveAreasList() = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasList& operator=(const DescribeLivePrivateLineAreasResponseBodyLiveAreasList &) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasList& operator=(DescribeLivePrivateLineAreasResponseBodyLiveAreasList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveArea_ != nullptr; };
    // liveArea Field Functions 
    bool hasLiveArea() const { return this->liveArea_ != nullptr;};
    void deleteLiveArea() { this->liveArea_ = nullptr;};
    inline const vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea> & liveArea() const { DARABONBA_PTR_GET_CONST(liveArea_, vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea>) };
    inline vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea> liveArea() { DARABONBA_PTR_GET(liveArea_, vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea>) };
    inline DescribeLivePrivateLineAreasResponseBodyLiveAreasList& setLiveArea(const vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea> & liveArea) { DARABONBA_PTR_SET_VALUE(liveArea_, liveArea) };
    inline DescribeLivePrivateLineAreasResponseBodyLiveAreasList& setLiveArea(vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea> && liveArea) { DARABONBA_PTR_SET_RVALUE(liveArea_, liveArea) };


  protected:
    std::shared_ptr<vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea>> liveArea_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
