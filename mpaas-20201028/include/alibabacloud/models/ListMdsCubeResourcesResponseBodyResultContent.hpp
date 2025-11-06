// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMDSCUBERESOURCESRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTMDSCUBERESOURCESRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMdsCubeResourcesResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMdsCubeResourcesResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMdsCubeResourcesResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMdsCubeResourcesResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMdsCubeResourcesResponseBodyResultContent() = default ;
    ListMdsCubeResourcesResponseBodyResultContent(const ListMdsCubeResourcesResponseBodyResultContent &) = default ;
    ListMdsCubeResourcesResponseBodyResultContent(ListMdsCubeResourcesResponseBodyResultContent &&) = default ;
    ListMdsCubeResourcesResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMdsCubeResourcesResponseBodyResultContent() = default ;
    ListMdsCubeResourcesResponseBodyResultContent& operator=(const ListMdsCubeResourcesResponseBodyResultContent &) = default ;
    ListMdsCubeResourcesResponseBodyResultContent& operator=(ListMdsCubeResourcesResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::ListMdsCubeResourcesResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::ListMdsCubeResourcesResponseBodyResultContentData) };
    inline Models::ListMdsCubeResourcesResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::ListMdsCubeResourcesResponseBodyResultContentData) };
    inline ListMdsCubeResourcesResponseBodyResultContent& setData(const Models::ListMdsCubeResourcesResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMdsCubeResourcesResponseBodyResultContent& setData(Models::ListMdsCubeResourcesResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<Models::ListMdsCubeResourcesResponseBodyResultContentData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
