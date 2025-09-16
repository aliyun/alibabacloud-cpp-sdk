// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLEGENERATIONSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLEGENERATIONSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListTableGenerationsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableGenerationsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(generationId, generationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableGenerationsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(generationId, generationId_);
    };
    ListTableGenerationsResponseBodyResult() = default ;
    ListTableGenerationsResponseBodyResult(const ListTableGenerationsResponseBodyResult &) = default ;
    ListTableGenerationsResponseBodyResult(ListTableGenerationsResponseBodyResult &&) = default ;
    ListTableGenerationsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableGenerationsResponseBodyResult() = default ;
    ListTableGenerationsResponseBodyResult& operator=(const ListTableGenerationsResponseBodyResult &) = default ;
    ListTableGenerationsResponseBodyResult& operator=(ListTableGenerationsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->generationId_ != nullptr; };
    // generationId Field Functions 
    bool hasGenerationId() const { return this->generationId_ != nullptr;};
    void deleteGenerationId() { this->generationId_ = nullptr;};
    inline int64_t generationId() const { DARABONBA_PTR_GET_DEFAULT(generationId_, 0L) };
    inline ListTableGenerationsResponseBodyResult& setGenerationId(int64_t generationId) { DARABONBA_PTR_SET_VALUE(generationId_, generationId) };


  protected:
    // The ID of the full index version.
    std::shared_ptr<int64_t> generationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
