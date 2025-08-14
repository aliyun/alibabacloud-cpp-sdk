// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYNONEXISTIDS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYNONEXISTIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryMediaCensorJobListResponseBodyNonExistIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobListResponseBodyNonExistIds& obj) { 
      DARABONBA_PTR_TO_JSON(String, string_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobListResponseBodyNonExistIds& obj) { 
      DARABONBA_PTR_FROM_JSON(String, string_);
    };
    QueryMediaCensorJobListResponseBodyNonExistIds() = default ;
    QueryMediaCensorJobListResponseBodyNonExistIds(const QueryMediaCensorJobListResponseBodyNonExistIds &) = default ;
    QueryMediaCensorJobListResponseBodyNonExistIds(QueryMediaCensorJobListResponseBodyNonExistIds &&) = default ;
    QueryMediaCensorJobListResponseBodyNonExistIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobListResponseBodyNonExistIds() = default ;
    QueryMediaCensorJobListResponseBodyNonExistIds& operator=(const QueryMediaCensorJobListResponseBodyNonExistIds &) = default ;
    QueryMediaCensorJobListResponseBodyNonExistIds& operator=(QueryMediaCensorJobListResponseBodyNonExistIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->string_ != nullptr; };
    // string Field Functions 
    bool hasString() const { return this->string_ != nullptr;};
    void deleteString() { this->string_ = nullptr;};
    inline const vector<string> & string() const { DARABONBA_PTR_GET_CONST(string_, vector<string>) };
    inline vector<string> string() { DARABONBA_PTR_GET(string_, vector<string>) };
    inline QueryMediaCensorJobListResponseBodyNonExistIds& setString(const vector<string> & string) { DARABONBA_PTR_SET_VALUE(string_, string) };
    inline QueryMediaCensorJobListResponseBodyNonExistIds& setString(vector<string> && string) { DARABONBA_PTR_SET_RVALUE(string_, string) };


  protected:
    std::shared_ptr<vector<string>> string_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
