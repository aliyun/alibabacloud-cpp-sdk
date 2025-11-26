// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDRESOURCEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDRESOURCEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetCloudResourceDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudResourceDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudResourceDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetCloudResourceDataResponseBody() = default ;
    GetCloudResourceDataResponseBody(const GetCloudResourceDataResponseBody &) = default ;
    GetCloudResourceDataResponseBody(GetCloudResourceDataResponseBody &&) = default ;
    GetCloudResourceDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudResourceDataResponseBody() = default ;
    GetCloudResourceDataResponseBody& operator=(const GetCloudResourceDataResponseBody &) = default ;
    GetCloudResourceDataResponseBody& operator=(GetCloudResourceDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->header_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<vector<string>> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<vector<string>>) };
    inline vector<vector<string>> data() { DARABONBA_PTR_GET(data_, vector<vector<string>>) };
    inline GetCloudResourceDataResponseBody& setData(const vector<vector<string>> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCloudResourceDataResponseBody& setData(vector<vector<string>> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const vector<string> & header() const { DARABONBA_PTR_GET_CONST(header_, vector<string>) };
    inline vector<string> header() { DARABONBA_PTR_GET(header_, vector<string>) };
    inline GetCloudResourceDataResponseBody& setHeader(const vector<string> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline GetCloudResourceDataResponseBody& setHeader(vector<string> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudResourceDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<vector<string>>> data_ = nullptr;
    std::shared_ptr<vector<string>> header_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
