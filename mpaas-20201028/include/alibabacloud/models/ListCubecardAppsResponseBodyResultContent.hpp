// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUBECARDAPPSRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTCUBECARDAPPSRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCubecardAppsResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListCubecardAppsResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCubecardAppsResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCubecardAppsResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCubecardAppsResponseBodyResultContent() = default ;
    ListCubecardAppsResponseBodyResultContent(const ListCubecardAppsResponseBodyResultContent &) = default ;
    ListCubecardAppsResponseBodyResultContent(ListCubecardAppsResponseBodyResultContent &&) = default ;
    ListCubecardAppsResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCubecardAppsResponseBodyResultContent() = default ;
    ListCubecardAppsResponseBodyResultContent& operator=(const ListCubecardAppsResponseBodyResultContent &) = default ;
    ListCubecardAppsResponseBodyResultContent& operator=(ListCubecardAppsResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::ListCubecardAppsResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::ListCubecardAppsResponseBodyResultContentData) };
    inline Models::ListCubecardAppsResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::ListCubecardAppsResponseBodyResultContentData) };
    inline ListCubecardAppsResponseBodyResultContent& setData(const Models::ListCubecardAppsResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCubecardAppsResponseBodyResultContent& setData(Models::ListCubecardAppsResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCubecardAppsResponseBodyResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<Models::ListCubecardAppsResponseBodyResultContentData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
