// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXRECOVERRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXRECOVERRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListIndexRecoverRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexRecoverRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(generationId, generationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexRecoverRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(generationId, generationId_);
    };
    ListIndexRecoverRecordsResponseBody() = default ;
    ListIndexRecoverRecordsResponseBody(const ListIndexRecoverRecordsResponseBody &) = default ;
    ListIndexRecoverRecordsResponseBody(ListIndexRecoverRecordsResponseBody &&) = default ;
    ListIndexRecoverRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexRecoverRecordsResponseBody() = default ;
    ListIndexRecoverRecordsResponseBody& operator=(const ListIndexRecoverRecordsResponseBody &) = default ;
    ListIndexRecoverRecordsResponseBody& operator=(ListIndexRecoverRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->finishedTime_ != nullptr && this->generationId_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline ListIndexRecoverRecordsResponseBody& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline ListIndexRecoverRecordsResponseBody& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // generationId Field Functions 
    bool hasGenerationId() const { return this->generationId_ != nullptr;};
    void deleteGenerationId() { this->generationId_ = nullptr;};
    inline string generationId() const { DARABONBA_PTR_GET_DEFAULT(generationId_, "") };
    inline ListIndexRecoverRecordsResponseBody& setGenerationId(string generationId) { DARABONBA_PTR_SET_VALUE(generationId_, generationId) };


  protected:
    // The description.
    std::shared_ptr<string> desc_ = nullptr;
    // The time when the index version was published.
    std::shared_ptr<string> finishedTime_ = nullptr;
    // The ID of the full index version.
    std::shared_ptr<string> generationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
