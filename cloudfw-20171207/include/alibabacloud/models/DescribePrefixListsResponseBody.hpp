// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePrefixListsResponseBodyPrefixList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePrefixListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PrefixList, prefixList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PrefixList, prefixList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePrefixListsResponseBody() = default ;
    DescribePrefixListsResponseBody(const DescribePrefixListsResponseBody &) = default ;
    DescribePrefixListsResponseBody(DescribePrefixListsResponseBody &&) = default ;
    DescribePrefixListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListsResponseBody() = default ;
    DescribePrefixListsResponseBody& operator=(const DescribePrefixListsResponseBody &) = default ;
    DescribePrefixListsResponseBody& operator=(DescribePrefixListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prefixList_ == nullptr
        && return this->requestId_ == nullptr; };
    // prefixList Field Functions 
    bool hasPrefixList() const { return this->prefixList_ != nullptr;};
    void deletePrefixList() { this->prefixList_ = nullptr;};
    inline const vector<DescribePrefixListsResponseBodyPrefixList> & prefixList() const { DARABONBA_PTR_GET_CONST(prefixList_, vector<DescribePrefixListsResponseBodyPrefixList>) };
    inline vector<DescribePrefixListsResponseBodyPrefixList> prefixList() { DARABONBA_PTR_GET(prefixList_, vector<DescribePrefixListsResponseBodyPrefixList>) };
    inline DescribePrefixListsResponseBody& setPrefixList(const vector<DescribePrefixListsResponseBodyPrefixList> & prefixList) { DARABONBA_PTR_SET_VALUE(prefixList_, prefixList) };
    inline DescribePrefixListsResponseBody& setPrefixList(vector<DescribePrefixListsResponseBodyPrefixList> && prefixList) { DARABONBA_PTR_SET_RVALUE(prefixList_, prefixList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrefixListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the prefix lists.
    std::shared_ptr<vector<DescribePrefixListsResponseBodyPrefixList>> prefixList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
