// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Partition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListPartitionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(partitions, partitions_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(partitions, partitions_);
    };
    ListPartitionsResponseBody() = default ;
    ListPartitionsResponseBody(const ListPartitionsResponseBody &) = default ;
    ListPartitionsResponseBody(ListPartitionsResponseBody &&) = default ;
    ListPartitionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionsResponseBody() = default ;
    ListPartitionsResponseBody& operator=(const ListPartitionsResponseBody &) = default ;
    ListPartitionsResponseBody& operator=(ListPartitionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && return this->partitions_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListPartitionsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const vector<Partition> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<Partition>) };
    inline vector<Partition> partitions() { DARABONBA_PTR_GET(partitions_, vector<Partition>) };
    inline ListPartitionsResponseBody& setPartitions(const vector<Partition> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline ListPartitionsResponseBody& setPartitions(vector<Partition> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<Partition>> partitions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
