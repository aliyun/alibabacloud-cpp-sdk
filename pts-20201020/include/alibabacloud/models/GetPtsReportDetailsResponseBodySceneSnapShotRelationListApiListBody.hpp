// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTRELATIONLISTAPILISTBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTRELATIONLISTAPILISTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody& obj) { 
      DARABONBA_PTR_TO_JSON(BodyValue, bodyValue_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyValue, bodyValue_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
    };
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody(const GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody(GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody &&) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody& operator=(const GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody& operator=(GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyValue_ == nullptr
        && return this->contentType_ == nullptr; };
    // bodyValue Field Functions 
    bool hasBodyValue() const { return this->bodyValue_ != nullptr;};
    void deleteBodyValue() { this->bodyValue_ = nullptr;};
    inline string bodyValue() const { DARABONBA_PTR_GET_DEFAULT(bodyValue_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody& setBodyValue(string bodyValue) { DARABONBA_PTR_SET_VALUE(bodyValue_, bodyValue) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


  protected:
    // The content of the request body.
    std::shared_ptr<string> bodyValue_ = nullptr;
    // The type of the request body.
    std::shared_ptr<string> contentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
