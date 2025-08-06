// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILTERCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDFILTERCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddFilterConfigsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddFilterConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilterConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilterConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddFilterConfigsResponseBody() = default ;
    AddFilterConfigsResponseBody(const AddFilterConfigsResponseBody &) = default ;
    AddFilterConfigsResponseBody(AddFilterConfigsResponseBody &&) = default ;
    AddFilterConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilterConfigsResponseBody() = default ;
    AddFilterConfigsResponseBody& operator=(const AddFilterConfigsResponseBody &) = default ;
    AddFilterConfigsResponseBody& operator=(AddFilterConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<AddFilterConfigsResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<AddFilterConfigsResponseBodyData>) };
    inline vector<AddFilterConfigsResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<AddFilterConfigsResponseBodyData>) };
    inline AddFilterConfigsResponseBody& setData(const vector<AddFilterConfigsResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddFilterConfigsResponseBody& setData(vector<AddFilterConfigsResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddFilterConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<AddFilterConfigsResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
