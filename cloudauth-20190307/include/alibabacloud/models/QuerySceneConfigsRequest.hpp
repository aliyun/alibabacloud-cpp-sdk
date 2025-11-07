// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCENECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCENECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QuerySceneConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySceneConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySceneConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    QuerySceneConfigsRequest() = default ;
    QuerySceneConfigsRequest(const QuerySceneConfigsRequest &) = default ;
    QuerySceneConfigsRequest(QuerySceneConfigsRequest &&) = default ;
    QuerySceneConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySceneConfigsRequest() = default ;
    QuerySceneConfigsRequest& operator=(const QuerySceneConfigsRequest &) = default ;
    QuerySceneConfigsRequest& operator=(QuerySceneConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QuerySceneConfigsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Scene type.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
