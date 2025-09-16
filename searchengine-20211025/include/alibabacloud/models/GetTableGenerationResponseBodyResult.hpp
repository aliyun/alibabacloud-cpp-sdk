// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEGENERATIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEGENERATIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetTableGenerationResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableGenerationResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(generationId, generationId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableGenerationResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(generationId, generationId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetTableGenerationResponseBodyResult() = default ;
    GetTableGenerationResponseBodyResult(const GetTableGenerationResponseBodyResult &) = default ;
    GetTableGenerationResponseBodyResult(GetTableGenerationResponseBodyResult &&) = default ;
    GetTableGenerationResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableGenerationResponseBodyResult() = default ;
    GetTableGenerationResponseBodyResult& operator=(const GetTableGenerationResponseBodyResult &) = default ;
    GetTableGenerationResponseBodyResult& operator=(GetTableGenerationResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->generationId_ != nullptr
        && this->status_ != nullptr; };
    // generationId Field Functions 
    bool hasGenerationId() const { return this->generationId_ != nullptr;};
    void deleteGenerationId() { this->generationId_ = nullptr;};
    inline int64_t generationId() const { DARABONBA_PTR_GET_DEFAULT(generationId_, 0L) };
    inline GetTableGenerationResponseBodyResult& setGenerationId(int64_t generationId) { DARABONBA_PTR_SET_VALUE(generationId_, generationId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTableGenerationResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // generationId
    std::shared_ptr<int64_t> generationId_ = nullptr;
    // starting, building, ready, stopped, failed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
