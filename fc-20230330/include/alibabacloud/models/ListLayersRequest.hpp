// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAYERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLAYERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListLayersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLayersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(official, official_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
      DARABONBA_PTR_TO_JSON(public, public_);
    };
    friend void from_json(const Darabonba::Json& j, ListLayersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(official, official_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(public, public_);
    };
    ListLayersRequest() = default ;
    ListLayersRequest(const ListLayersRequest &) = default ;
    ListLayersRequest(ListLayersRequest &&) = default ;
    ListLayersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLayersRequest() = default ;
    ListLayersRequest& operator=(const ListLayersRequest &) = default ;
    ListLayersRequest& operator=(ListLayersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr
        && return this->nextToken_ == nullptr && return this->official_ == nullptr && return this->prefix_ == nullptr && return this->public_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListLayersRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLayersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // official Field Functions 
    bool hasOfficial() const { return this->official_ != nullptr;};
    void deleteOfficial() { this->official_ = nullptr;};
    inline string official() const { DARABONBA_PTR_GET_DEFAULT(official_, "") };
    inline ListLayersRequest& setOfficial(string official) { DARABONBA_PTR_SET_VALUE(official_, official) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListLayersRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // public Field Functions 
    bool hasPublic() const { return this->public_ != nullptr;};
    void deletePublic() { this->public_ = nullptr;};
    inline string _public() const { DARABONBA_PTR_GET_DEFAULT(public_, "") };
    inline ListLayersRequest& setPublic(string _public) { DARABONBA_PTR_SET_VALUE(public_, _public) };


  protected:
    // The number of layers that are returned
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Specifies whether the layer is official. Valid values: true and false.
    std::shared_ptr<string> official_ = nullptr;
    // The name prefix of the layer.
    std::shared_ptr<string> prefix_ = nullptr;
    // Specifies whether the layer is public. Valid values: true and false.
    std::shared_ptr<string> public_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
