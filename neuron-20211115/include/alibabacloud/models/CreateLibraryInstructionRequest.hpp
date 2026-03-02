// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIBRARYINSTRUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIBRARYINSTRUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateLibraryInstructionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLibraryInstructionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(document, document_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLibraryInstructionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(document, document_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
    };
    CreateLibraryInstructionRequest() = default ;
    CreateLibraryInstructionRequest(const CreateLibraryInstructionRequest &) = default ;
    CreateLibraryInstructionRequest(CreateLibraryInstructionRequest &&) = default ;
    CreateLibraryInstructionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLibraryInstructionRequest() = default ;
    CreateLibraryInstructionRequest& operator=(const CreateLibraryInstructionRequest &) = default ;
    CreateLibraryInstructionRequest& operator=(CreateLibraryInstructionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->document_ == nullptr && this->id_ == nullptr && this->libraryId_ == nullptr && this->marketId_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline CreateLibraryInstructionRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline CreateLibraryInstructionRequest& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline CreateLibraryInstructionRequest& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline CreateLibraryInstructionRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline CreateLibraryInstructionRequest& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> document_ {};
    shared_ptr<int32_t> id_ {};
    shared_ptr<string> libraryId_ {};
    shared_ptr<int64_t> marketId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
