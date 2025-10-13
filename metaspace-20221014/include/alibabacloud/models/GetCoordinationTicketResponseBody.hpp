// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOORDINATIONTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOORDINATIONTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCoordinationTicketResponseBodyCoordinateTicketModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20221014
{
namespace Models
{
  class GetCoordinationTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCoordinationTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CoordinateTicketModel, coordinateTicketModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCoordinationTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CoordinateTicketModel, coordinateTicketModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCoordinationTicketResponseBody() = default ;
    GetCoordinationTicketResponseBody(const GetCoordinationTicketResponseBody &) = default ;
    GetCoordinationTicketResponseBody(GetCoordinationTicketResponseBody &&) = default ;
    GetCoordinationTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCoordinationTicketResponseBody() = default ;
    GetCoordinationTicketResponseBody& operator=(const GetCoordinationTicketResponseBody &) = default ;
    GetCoordinationTicketResponseBody& operator=(GetCoordinationTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coordinateTicketModel_ != nullptr
        && this->requestId_ != nullptr; };
    // coordinateTicketModel Field Functions 
    bool hasCoordinateTicketModel() const { return this->coordinateTicketModel_ != nullptr;};
    void deleteCoordinateTicketModel() { this->coordinateTicketModel_ = nullptr;};
    inline const GetCoordinationTicketResponseBodyCoordinateTicketModel & coordinateTicketModel() const { DARABONBA_PTR_GET_CONST(coordinateTicketModel_, GetCoordinationTicketResponseBodyCoordinateTicketModel) };
    inline GetCoordinationTicketResponseBodyCoordinateTicketModel coordinateTicketModel() { DARABONBA_PTR_GET(coordinateTicketModel_, GetCoordinationTicketResponseBodyCoordinateTicketModel) };
    inline GetCoordinationTicketResponseBody& setCoordinateTicketModel(const GetCoordinationTicketResponseBodyCoordinateTicketModel & coordinateTicketModel) { DARABONBA_PTR_SET_VALUE(coordinateTicketModel_, coordinateTicketModel) };
    inline GetCoordinationTicketResponseBody& setCoordinateTicketModel(GetCoordinationTicketResponseBodyCoordinateTicketModel && coordinateTicketModel) { DARABONBA_PTR_SET_RVALUE(coordinateTicketModel_, coordinateTicketModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCoordinationTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetCoordinationTicketResponseBodyCoordinateTicketModel> coordinateTicketModel_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Metaspace20221014
#endif
