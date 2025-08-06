// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCBLOCKSQUERYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DOCBLOCKSQUERYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DocBlocksQueryResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocBlocksQueryResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DocBlocksQueryResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    DocBlocksQueryResponseBodyResult() = default ;
    DocBlocksQueryResponseBodyResult(const DocBlocksQueryResponseBodyResult &) = default ;
    DocBlocksQueryResponseBodyResult(DocBlocksQueryResponseBodyResult &&) = default ;
    DocBlocksQueryResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocBlocksQueryResponseBodyResult() = default ;
    DocBlocksQueryResponseBodyResult& operator=(const DocBlocksQueryResponseBodyResult &) = default ;
    DocBlocksQueryResponseBodyResult& operator=(DocBlocksQueryResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Darabonba::Json> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> data() { DARABONBA_PTR_GET(data_, vector<Darabonba::Json>) };
    inline DocBlocksQueryResponseBodyResult& setData(const vector<Darabonba::Json> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DocBlocksQueryResponseBodyResult& setData(vector<Darabonba::Json> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
