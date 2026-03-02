// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIBRARYINSTRUCTION_HPP_
#define ALIBABACLOUD_MODELS_LIBRARYINSTRUCTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class LibraryInstruction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LibraryInstruction& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(document, document_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LibraryInstruction& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(document, document_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    LibraryInstruction() = default ;
    LibraryInstruction(const LibraryInstruction &) = default ;
    LibraryInstruction(LibraryInstruction &&) = default ;
    LibraryInstruction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LibraryInstruction() = default ;
    LibraryInstruction& operator=(const LibraryInstruction &) = default ;
    LibraryInstruction& operator=(LibraryInstruction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->document_ == nullptr && this->id_ == nullptr && this->libraryId_ == nullptr && this->marketId_ == nullptr && this->requestId_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline LibraryInstruction& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline LibraryInstruction& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline LibraryInstruction& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline LibraryInstruction& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline LibraryInstruction& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LibraryInstruction& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> document_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> libraryId_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
