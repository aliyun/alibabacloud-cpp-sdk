// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVODTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVodTemplateResponseBodyVodTemplateInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VodTemplateInfoList, vodTemplateInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VodTemplateInfoList, vodTemplateInfoList_);
    };
    ListVodTemplateResponseBody() = default ;
    ListVodTemplateResponseBody(const ListVodTemplateResponseBody &) = default ;
    ListVodTemplateResponseBody(ListVodTemplateResponseBody &&) = default ;
    ListVodTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodTemplateResponseBody() = default ;
    ListVodTemplateResponseBody& operator=(const ListVodTemplateResponseBody &) = default ;
    ListVodTemplateResponseBody& operator=(ListVodTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vodTemplateInfoList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVodTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vodTemplateInfoList Field Functions 
    bool hasVodTemplateInfoList() const { return this->vodTemplateInfoList_ != nullptr;};
    void deleteVodTemplateInfoList() { this->vodTemplateInfoList_ = nullptr;};
    inline const vector<ListVodTemplateResponseBodyVodTemplateInfoList> & vodTemplateInfoList() const { DARABONBA_PTR_GET_CONST(vodTemplateInfoList_, vector<ListVodTemplateResponseBodyVodTemplateInfoList>) };
    inline vector<ListVodTemplateResponseBodyVodTemplateInfoList> vodTemplateInfoList() { DARABONBA_PTR_GET(vodTemplateInfoList_, vector<ListVodTemplateResponseBodyVodTemplateInfoList>) };
    inline ListVodTemplateResponseBody& setVodTemplateInfoList(const vector<ListVodTemplateResponseBodyVodTemplateInfoList> & vodTemplateInfoList) { DARABONBA_PTR_SET_VALUE(vodTemplateInfoList_, vodTemplateInfoList) };
    inline ListVodTemplateResponseBody& setVodTemplateInfoList(vector<ListVodTemplateResponseBodyVodTemplateInfoList> && vodTemplateInfoList) { DARABONBA_PTR_SET_RVALUE(vodTemplateInfoList_, vodTemplateInfoList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The snapshot templates.
    std::shared_ptr<vector<ListVodTemplateResponseBodyVodTemplateInfoList>> vodTemplateInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
