// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCOUNTSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCOUNTSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCheckCountStatisticResponseBodyCheckCountStatisticDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckCountStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckCountStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCountStatisticDTO, checkCountStatisticDTO_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckCountStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCountStatisticDTO, checkCountStatisticDTO_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCheckCountStatisticResponseBody() = default ;
    GetCheckCountStatisticResponseBody(const GetCheckCountStatisticResponseBody &) = default ;
    GetCheckCountStatisticResponseBody(GetCheckCountStatisticResponseBody &&) = default ;
    GetCheckCountStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckCountStatisticResponseBody() = default ;
    GetCheckCountStatisticResponseBody& operator=(const GetCheckCountStatisticResponseBody &) = default ;
    GetCheckCountStatisticResponseBody& operator=(GetCheckCountStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkCountStatisticDTO_ != nullptr
        && this->requestId_ != nullptr; };
    // checkCountStatisticDTO Field Functions 
    bool hasCheckCountStatisticDTO() const { return this->checkCountStatisticDTO_ != nullptr;};
    void deleteCheckCountStatisticDTO() { this->checkCountStatisticDTO_ = nullptr;};
    inline const GetCheckCountStatisticResponseBodyCheckCountStatisticDTO & checkCountStatisticDTO() const { DARABONBA_PTR_GET_CONST(checkCountStatisticDTO_, GetCheckCountStatisticResponseBodyCheckCountStatisticDTO) };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTO checkCountStatisticDTO() { DARABONBA_PTR_GET(checkCountStatisticDTO_, GetCheckCountStatisticResponseBodyCheckCountStatisticDTO) };
    inline GetCheckCountStatisticResponseBody& setCheckCountStatisticDTO(const GetCheckCountStatisticResponseBodyCheckCountStatisticDTO & checkCountStatisticDTO) { DARABONBA_PTR_SET_VALUE(checkCountStatisticDTO_, checkCountStatisticDTO) };
    inline GetCheckCountStatisticResponseBody& setCheckCountStatisticDTO(GetCheckCountStatisticResponseBodyCheckCountStatisticDTO && checkCountStatisticDTO) { DARABONBA_PTR_SET_RVALUE(checkCountStatisticDTO_, checkCountStatisticDTO) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckCountStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The risk item statistics.
    std::shared_ptr<GetCheckCountStatisticResponseBodyCheckCountStatisticDTO> checkCountStatisticDTO_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
