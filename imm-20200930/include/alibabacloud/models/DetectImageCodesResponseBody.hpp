// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGECODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGECODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Codes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectImageCodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageCodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Codes, codes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageCodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Codes, codes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectImageCodesResponseBody() = default ;
    DetectImageCodesResponseBody(const DetectImageCodesResponseBody &) = default ;
    DetectImageCodesResponseBody(DetectImageCodesResponseBody &&) = default ;
    DetectImageCodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageCodesResponseBody() = default ;
    DetectImageCodesResponseBody& operator=(const DetectImageCodesResponseBody &) = default ;
    DetectImageCodesResponseBody& operator=(DetectImageCodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codes_ != nullptr
        && this->requestId_ != nullptr; };
    // codes Field Functions 
    bool hasCodes() const { return this->codes_ != nullptr;};
    void deleteCodes() { this->codes_ = nullptr;};
    inline const vector<Codes> & codes() const { DARABONBA_PTR_GET_CONST(codes_, vector<Codes>) };
    inline vector<Codes> codes() { DARABONBA_PTR_GET(codes_, vector<Codes>) };
    inline DetectImageCodesResponseBody& setCodes(const vector<Codes> & codes) { DARABONBA_PTR_SET_VALUE(codes_, codes) };
    inline DetectImageCodesResponseBody& setCodes(vector<Codes> && codes) { DARABONBA_PTR_SET_RVALUE(codes_, codes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectImageCodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The barcodes or QR codes.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Codes>> codes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
