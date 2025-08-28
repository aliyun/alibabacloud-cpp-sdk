// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCPUBLISHEDROUTEENTRIESRESPONSEBODYROUTEENTRIESROUTEPUBLISHTARGETS_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCPUBLISHEDROUTEENTRIESRESPONSEBODYROUTEENTRIESROUTEPUBLISHTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets& obj) { 
      DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(PublishTargetInstanceId, publishTargetInstanceId_);
      DARABONBA_PTR_TO_JSON(PublishTargetType, publishTargetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(PublishTargetInstanceId, publishTargetInstanceId_);
      DARABONBA_PTR_FROM_JSON(PublishTargetType, publishTargetType_);
    };
    ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets() = default ;
    ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets(const ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets &) = default ;
    ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets(ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets &&) = default ;
    ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets() = default ;
    ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets& operator=(const ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets &) = default ;
    ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets& operator=(ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->publishStatus_ != nullptr
        && this->publishTargetInstanceId_ != nullptr && this->publishTargetType_ != nullptr; };
    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline string publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
    inline ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // publishTargetInstanceId Field Functions 
    bool hasPublishTargetInstanceId() const { return this->publishTargetInstanceId_ != nullptr;};
    void deletePublishTargetInstanceId() { this->publishTargetInstanceId_ = nullptr;};
    inline string publishTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(publishTargetInstanceId_, "") };
    inline ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets& setPublishTargetInstanceId(string publishTargetInstanceId) { DARABONBA_PTR_SET_VALUE(publishTargetInstanceId_, publishTargetInstanceId) };


    // publishTargetType Field Functions 
    bool hasPublishTargetType() const { return this->publishTargetType_ != nullptr;};
    void deletePublishTargetType() { this->publishTargetType_ = nullptr;};
    inline string publishTargetType() const { DARABONBA_PTR_GET_DEFAULT(publishTargetType_, "") };
    inline ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets& setPublishTargetType(string publishTargetType) { DARABONBA_PTR_SET_VALUE(publishTargetType_, publishTargetType) };


  protected:
    // The publishing status of the route entry in the publishing target.
    std::shared_ptr<string> publishStatus_ = nullptr;
    // The ID of the route publishing target instance.
    std::shared_ptr<string> publishTargetInstanceId_ = nullptr;
    // The type of the route publishing target.
    std::shared_ptr<string> publishTargetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
