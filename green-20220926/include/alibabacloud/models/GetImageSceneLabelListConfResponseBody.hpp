// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGESCENELABELLISTCONFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGESCENELABELLISTCONFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetImageSceneLabelListConfResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageSceneLabelListConfResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageSceneLabelListConfResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetImageSceneLabelListConfResponseBody() = default ;
    GetImageSceneLabelListConfResponseBody(const GetImageSceneLabelListConfResponseBody &) = default ;
    GetImageSceneLabelListConfResponseBody(GetImageSceneLabelListConfResponseBody &&) = default ;
    GetImageSceneLabelListConfResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageSceneLabelListConfResponseBody() = default ;
    GetImageSceneLabelListConfResponseBody& operator=(const GetImageSceneLabelListConfResponseBody &) = default ;
    GetImageSceneLabelListConfResponseBody& operator=(GetImageSceneLabelListConfResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Darabonba::Json> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> data() { DARABONBA_PTR_GET(data_, vector<Darabonba::Json>) };
    inline GetImageSceneLabelListConfResponseBody& setData(const vector<Darabonba::Json> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetImageSceneLabelListConfResponseBody& setData(vector<Darabonba::Json> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageSceneLabelListConfResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    std::shared_ptr<vector<Darabonba::Json>> data_ = nullptr;
    // ID assigned by the backend, used to uniquely identify a request. Can be used for troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
