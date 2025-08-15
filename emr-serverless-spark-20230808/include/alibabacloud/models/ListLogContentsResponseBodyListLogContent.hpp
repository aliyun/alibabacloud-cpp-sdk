// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGCONTENTSRESPONSEBODYLISTLOGCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGCONTENTSRESPONSEBODYLISTLOGCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLogContentsResponseBodyListLogContentContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListLogContentsResponseBodyListLogContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogContentsResponseBodyListLogContent& obj) { 
      DARABONBA_PTR_TO_JSON(contents, contents_);
      DARABONBA_PTR_TO_JSON(totalLength, totalLength_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogContentsResponseBodyListLogContent& obj) { 
      DARABONBA_PTR_FROM_JSON(contents, contents_);
      DARABONBA_PTR_FROM_JSON(totalLength, totalLength_);
    };
    ListLogContentsResponseBodyListLogContent() = default ;
    ListLogContentsResponseBodyListLogContent(const ListLogContentsResponseBodyListLogContent &) = default ;
    ListLogContentsResponseBodyListLogContent(ListLogContentsResponseBodyListLogContent &&) = default ;
    ListLogContentsResponseBodyListLogContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogContentsResponseBodyListLogContent() = default ;
    ListLogContentsResponseBodyListLogContent& operator=(const ListLogContentsResponseBodyListLogContent &) = default ;
    ListLogContentsResponseBodyListLogContent& operator=(ListLogContentsResponseBodyListLogContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contents_ != nullptr
        && this->totalLength_ != nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<Models::ListLogContentsResponseBodyListLogContentContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<Models::ListLogContentsResponseBodyListLogContentContents>) };
    inline vector<Models::ListLogContentsResponseBodyListLogContentContents> contents() { DARABONBA_PTR_GET(contents_, vector<Models::ListLogContentsResponseBodyListLogContentContents>) };
    inline ListLogContentsResponseBodyListLogContent& setContents(const vector<Models::ListLogContentsResponseBodyListLogContentContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline ListLogContentsResponseBodyListLogContent& setContents(vector<Models::ListLogContentsResponseBodyListLogContentContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // totalLength Field Functions 
    bool hasTotalLength() const { return this->totalLength_ != nullptr;};
    void deleteTotalLength() { this->totalLength_ = nullptr;};
    inline int64_t totalLength() const { DARABONBA_PTR_GET_DEFAULT(totalLength_, 0L) };
    inline ListLogContentsResponseBodyListLogContent& setTotalLength(int64_t totalLength) { DARABONBA_PTR_SET_VALUE(totalLength_, totalLength) };


  protected:
    // List of log line contents.
    std::shared_ptr<vector<Models::ListLogContentsResponseBodyListLogContentContents>> contents_ = nullptr;
    // Total number of log lines.
    std::shared_ptr<int64_t> totalLength_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
