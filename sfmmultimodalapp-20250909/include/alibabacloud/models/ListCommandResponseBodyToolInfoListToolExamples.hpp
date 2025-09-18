// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMANDRESPONSEBODYTOOLINFOLISTTOOLEXAMPLES_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMANDRESPONSEBODYTOOLINFOLISTTOOLEXAMPLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class ListCommandResponseBodyToolInfoListToolExamples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommandResponseBodyToolInfoListToolExamples& obj) { 
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommandResponseBodyToolInfoListToolExamples& obj) { 
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    ListCommandResponseBodyToolInfoListToolExamples() = default ;
    ListCommandResponseBodyToolInfoListToolExamples(const ListCommandResponseBodyToolInfoListToolExamples &) = default ;
    ListCommandResponseBodyToolInfoListToolExamples(ListCommandResponseBodyToolInfoListToolExamples &&) = default ;
    ListCommandResponseBodyToolInfoListToolExamples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommandResponseBodyToolInfoListToolExamples() = default ;
    ListCommandResponseBodyToolInfoListToolExamples& operator=(const ListCommandResponseBodyToolInfoListToolExamples &) = default ;
    ListCommandResponseBodyToolInfoListToolExamples& operator=(ListCommandResponseBodyToolInfoListToolExamples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->query_ != nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListCommandResponseBodyToolInfoListToolExamples& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
