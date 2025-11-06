// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMDSCUBERESOURCERESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMDSCUBERESOURCERESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMdsCubeResourceResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMdsCubeResourceResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMdsCubeResourceResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMdsCubeResourceResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMdsCubeResourceResponseBodyResultContent() = default ;
    CreateMdsCubeResourceResponseBodyResultContent(const CreateMdsCubeResourceResponseBodyResultContent &) = default ;
    CreateMdsCubeResourceResponseBodyResultContent(CreateMdsCubeResourceResponseBodyResultContent &&) = default ;
    CreateMdsCubeResourceResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMdsCubeResourceResponseBodyResultContent() = default ;
    CreateMdsCubeResourceResponseBodyResultContent& operator=(const CreateMdsCubeResourceResponseBodyResultContent &) = default ;
    CreateMdsCubeResourceResponseBodyResultContent& operator=(CreateMdsCubeResourceResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::CreateMdsCubeResourceResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::CreateMdsCubeResourceResponseBodyResultContentData) };
    inline Models::CreateMdsCubeResourceResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::CreateMdsCubeResourceResponseBodyResultContentData) };
    inline CreateMdsCubeResourceResponseBodyResultContent& setData(const Models::CreateMdsCubeResourceResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateMdsCubeResourceResponseBodyResultContent& setData(Models::CreateMdsCubeResourceResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMdsCubeResourceResponseBodyResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<Models::CreateMdsCubeResourceResponseBodyResultContentData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
